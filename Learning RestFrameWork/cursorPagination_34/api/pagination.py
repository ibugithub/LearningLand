from rest_framework.pagination import CursorPagination

class MyCursorPagination(CursorPagination): 
   page_size = 4 
   ordering = 'name'
   cursor_query_param = 'cu' 
   # # The default cursor_query_param value is 'cursor'