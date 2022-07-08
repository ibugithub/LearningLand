from rest_framework.pagination import PageNumberPagination 

class MyPagination(PageNumberPagination):
    # # Below the page_size doesn't mean the actual page size it mean The amount of item in one page 
    page_size = 5
    page_query_param = 'p'
    # # The http request structure will be like this >>>>
    # http://127.0.0.1:8000/?p=2
    
    # # The following one is the defalut value
    # page_query_param = 'page' 


    page_size_query_param = 'records'
    # # The http request structure will be like this >>>>
    # http://127.0.0.1:8000/?p=2&records=3  

    max_page_size = 7
    # # So Now you can't be able to access more than 7 item in one page >>>
    # # Now let's try put more than 7 as folling ... 
    # http://127.0.0.1:8000/?p=1&records=8 


    # last_page_strings = 'end'
    # # You can try it The http request structure will be like this >>>>
    # http://127.0.0.1:8000/?p=end
     
    # But the default one is as follwing >>>>
    # last_page_strings = 'last'
    # # You can try it The http request structure will be like this >>>>
    # http://127.0.0.1:8000/?p=last
