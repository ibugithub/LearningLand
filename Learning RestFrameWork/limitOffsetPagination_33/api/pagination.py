from rest_framework.pagination import LimitOffsetPagination

class MyPagination(LimitOffsetPagination): 
    # # It will set the limit amount 5 items in one single page  
    default_limit = 5
    

    # # It will restrict the amount maxium 7 items in one page 
    max_limit = 7
    

    limit_query_param = 'mylimit'
    # # It's http request's structure will be 
    # http://127.0.0.1:8000/?mylimit=4&myoffset=3


    # # But the default 'limit_query_param' value is ==> limit
    # # It's http request's structure will be 
    # http://127.0.0.1:8000/?limit=4&offset=3



    offset_query_param = 'myoffset'
    # # It's http request's structure will be 
    # http://127.0.0.1:8000/?mylimit=4&myoffset=3

    # # But the default 'limit_query_param' value is ==> offset
    # # It's http request's structure will be 
    # http://127.0.0.1:8000/?limit=4&offset=3















