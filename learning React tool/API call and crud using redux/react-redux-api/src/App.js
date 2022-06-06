import './App.css';
import { useGetAllPostQuery, useGetPostByIdQuery, useGetPostByLimitQuery, useDeletePostByIdMutation, useCreatePostMutation, useUpdatePostMutation } from "./services/post.js";

// // This function is for getting All the data and filtered data
// function App() {
//   const allPost = useGetAllPostQuery();
//   const { isError, isSuccess, data, isLoading } = useGetAllPostQuery();
//   const myPost = useGetPostByIdQuery(1)
//   console.log("my Post is ", myPost)

//   return (
//     <>
//       <h1> hello world </h1>
//       {isLoading && <h2>Data is loading...</h2>}
//       {isError ? <h2>An Error has been occured! {allPost.error.error}</h2> : <h2>The data is below </h2>}


//       <h2>This is my filtered data</h2>
//       {
//         myPost.isSuccess && <div> <h2>{myPost.data.id}{myPost.data.title}</h2>
//       <p>{myPost.data.body}</p> <hr/> <br/><br/>  </div>
//       }


//       <h2>This is all posts</h2>
//       {
//         isSuccess && <div>{data.map((post, i) => <div key={i}><h3>{post.id} {post.title}</h3> <p>{post.body}</p> <hr/></div>)} </div>
//       } 
//     </>
//   );
// }



// // This function is for getting limited data
// function App() {
//   const limitedPost = useGetPostByLimitQuery(7)
//   console.log("the limited post is ", limitedPost)
//   const allResponseInfo = useDeletePostByIdMutation()
//   const [deletePost, resposeInfo] = useDeletePostByIdMutation()
//   console.log("all the info about delete post together here", allResponseInfo)
//   console.log('This item will be deleted', deletePost)
//   console.log("This is the response info", resposeInfo)
//   return (
//     <>
//       <h2>So this is the  limited data</h2>

//       { limitedPost.isSuccess &&
//         <div>
//           {limitedPost.data.map(
//             (post, i) => {
//               return (
//                 <div key={i}>
//                   <h2>{post.id} {post.title}</h2>
//                   <p>{post.body}</p>
//                 </div>
//               );
//             }
//           )}
//         </div>
//       }
//     </>
//   );
// }




// This function is for deleting the data
function App() {
  const allResponseInfo = useDeletePostByIdMutation()
  const [deletePost, resposeInfo] = useDeletePostByIdMutation()
  console.log("all the info about delete post together here", allResponseInfo)
  console.log('This item will be deleted', deletePost)
  console.log("This is the response info of delete post", resposeInfo)


  const  [createPost, createPostInfo] = useCreatePostMutation()
  console.log("Now post should be created", createPost)
  console.log("Response info of created post", createPostInfo)
  const postBody = {'userId' : 1, 'title' : "this is title", 'body' : "this is the body" };
  const postHead = {"content-type": "application/json; charset=UTF-8"}


  const [updatePost, updateResponseInfo] = useUpdatePostMutation()
  const updatedData = {id : 6, userId : 6, title : "This is updated title", body : "This is updated body"}
  console.log("Response info of the updated post is ", updateResponseInfo )
  return (
    <>
    <h2>Redux-toolkit - Rtk query (delte data)</h2>
    <button onClick={()=> deletePost(7)}>Delete Post</button>
    
    <h2>Redux-toolkit - Rtk query (create post)</h2> 
    <button onClick={()=> createPost(postBody,postHead)}> Create Post</button>
    

    <h2>Redux-toolkit -Rtk query (update post)</h2>
    <button onClick={()=> updatePost(updatedData)}>Update post</button>


    </>
    
  );
}




export default App;
