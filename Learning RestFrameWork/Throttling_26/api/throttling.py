from rest_framework.throttling import UserRateThrottle 

class StudentApiThrottling(UserRateThrottle):
    scope = 'studentThrottle'