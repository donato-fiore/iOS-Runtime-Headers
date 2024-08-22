// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSVPLATFORMREQUESTOPERATION_H
#define SSVPLATFORMREQUESTOPERATION_H

@class NSOperation, NSMutableDictionary, NSString, NSArray, NSNumber, NSURL;
@protocol OS_dispatch_queue;


#import "SSVPlatformContext.h"
#import "SSBag.h"

@interface SSVPlatformRequestOperation : NSOperation {
    NSMutableDictionary *_additionalHeaderFields;
    NSMutableDictionary *_additionalParameters;
    NSString *_caller;
    SSVPlatformContext *_context;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_itemIdentifiers;
    NSArray *_bundleIdentifiers;
    NSString *_imageProfile;
    NSString *_keyProfile;
    NSInteger _personalizationStyle;
    id *_responseBlock;
    NSString *_storeFrontSuffix;
    NSNumber *_timeoutInterval;
    NSString *_userAgent;
}


@property NSUInteger attribution; // ivar: _attribution
@property (retain, nonatomic) SSBag *bag; // ivar: _bag
@property (copy) NSArray *bundleIdentifiers;
@property (copy) NSString *imageProfile;
@property (copy) NSArray *itemIdentifiers;
@property (copy) NSString *keyProfile;
@property (copy) NSURL *mainDocumentURL; // ivar: _mainDocumentURL
@property NSInteger personalizationStyle;
@property (copy) id *responseBlock;
@property BOOL shouldSuppressCookies; // ivar: _shouldSuppressCookies
@property BOOL shouldSuppressUserInfo; // ivar: _shouldSuppressUserInfo
@property (copy) NSString *storeFrontSuffix;
@property (copy) NSNumber *timeoutInterval;


-(id)_URLBagContext;
-(id)_callerValue;
-(id)_lookupWithRequest:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithPlatformContext:(id)arg0 ;
-(id)valueForHTTPHeaderField:(id)arg0 ;
-(id)valueForRequestParameter:(id)arg0 ;
-(void)_enumerateQueryParametersUsingBlock:(id)arg0 ;
-(void)_makeLocalJSSignRequest;
-(void)_makeLocalMescalRequest;
-(void)_makeLookupRequestWithPersonalizationStyle:(NSInteger)arg0 ;
-(void)_setCaller:(id)arg0 ;
-(void)_setUserAgent:(id)arg0 ;
-(void)main;
-(void)setValue:(id)arg0 forHTTPHeaderField:(id)arg1 ;
-(void)setValue:(id)arg0 forRequestParameter:(id)arg1 ;


@end


#endif