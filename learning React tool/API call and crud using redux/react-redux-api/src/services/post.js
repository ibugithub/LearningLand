import { createApi, fetchBaseQuery } from '@reduxjs/toolkit/query/react';

export const postApi = createApi({
  reducerPath: 'postApi',
  baseQuery: fetchBaseQuery({
    baseUrl: "https://jsonplaceholder.typicode.com/",
  }),
  endpoints: (builder) => ({
    getAllPost: builder.query({
      query: () => ({
        url: 'posts',
        method: 'GET'
      })
    }),

    getPostById: builder.query({
      query: (id) => {
        console.log('The coming id here in post.js is', id)
        return {
          url: `posts/${id}`,
          method: 'GET'
        }
      }
    }),

    getPostByLimit: builder.query({
      query: (number) => ({
        url: `posts?_limit=${number}`,
        method: 'GET'
      })
    }),

    deletePostById: builder.mutation({
      query: (id) => ({
        url: `posts/${id}`,
        method: "DELETE"
      })
    }),

    createPost: builder.mutation({
      query: (body, head) => {
        return {
          url: 'posts',
          method: "POST",
          body: body,
          header: head
        }
      }
    }),

    updatePost : builder.mutation({
      query : (updatedData)=> {
        const {id, ...updatedbody} = updatedData
        console.log("This is the updated data after destructing in post.js", updatedbody)
        return {
          url : `posts/${id}`,
          method : "PUT",
          body : updatedbody,
          header : {"content-type": "application/json; charset=UTF-8"}
        };
      }
    })


  })

})
export const { useGetAllPostQuery, useGetPostByIdQuery, useGetPostByLimitQuery, useDeletePostByIdMutation, useCreatePostMutation, useUpdatePostMutation} = postApi