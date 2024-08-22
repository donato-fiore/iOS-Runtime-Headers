// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVSTOREAPPLICATIONSETUPHELPER_H
#define TVSTOREAPPLICATIONSETUPHELPER_H

@class IKURLBagCache, NSURL;

#import <Foundation/Foundation.h>


@interface TVStoreApplicationSetupHelper : NSObject

@property (readonly, nonatomic) IKURLBagCache *bagCache; // ivar: _bagCache
@property (copy, nonatomic) NSURL *defaultBootURL; // ivar: _defaultBootURL


+(id)_parsedQueryParametersForURL:(id)arg0 ;
+(id)bootURLWithBagBootURL:(id)arg0 defaultBootURL:(id)arg1 ;
+(id)defaultBagBootLaunchContextWithOptions:(id)arg0 useCache:(BOOL)arg1 ;
+(id)fallbackBootURL;
+(id)launchContextWithLaunchOptions:(id)arg0 bagBootURLKey:(id)arg1 useCache:(BOOL)arg2 ;
+(id)launchContextWithLaunchOptions:(id)arg0 bootURL:(id)arg1 ;
+(id)launchContextWithLaunchOptions:(id)arg0 bootURL:(id)arg1 appLocalBootURL:(id)arg2 ;
+(id)launchContextWithLaunchOptions:(id)arg0 bootURL:(id)arg1 bagBootURLKey:(id)arg2 useCache:(BOOL)arg3 ;
+(id)launchContextWithLaunchOptions:(id)arg0 bootURL:(id)arg1 useCache:(BOOL)arg2 ;
+(id)preferredBootURL;
-(id)init;
-(id)initWithDefaultBootURL:(id)arg0 ;
-(id)initWithDefaultBootURL:(id)arg0 bagCache:(id)arg1 ;
-(void)obtainBootURLWithCompletion:(id)arg0 ;


@end


#endif