// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBNAVIGATIONDATAPRIVATE_H
#define WEBNAVIGATIONDATAPRIVATE_H


#import <Foundation/Foundation.h>


@interface WebNavigationDataPrivate : NSObject {
    RetainPtr<NSString> url;
    RetainPtr<NSString> title;
    RetainPtr<NSURLRequest> originalRequest;
    RetainPtr<NSURLResponse> response;
    BOOL hasSubstituteData;
    RetainPtr<NSString> clientRedirectSource;
}






@end


#endif