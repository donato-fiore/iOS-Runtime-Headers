// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ZHUGESUPPORTINITIALIZER_H
#define ZHUGESUPPORTINITIALIZER_H

@class NSDictionary, NSXPCConnection;


#import "ZhuGeSupportSingleton.h"
#import "ZhuGeSupportConfigHelper.h"

@interface ZhuGeSupportInitializer : ZhuGeSupportSingleton

@property (retain) id *c2sXpcProxy; // ivar: _c2sXpcProxy
@property (retain) ZhuGeSupportConfigHelper *configHelper; // ivar: _configHelper
@property BOOL initXPCDone; // ivar: _initXPCDone
@property (retain) NSDictionary *s2cElucidateDict; // ivar: _s2cElucidateDict
@property (retain) NSDictionary *s2cPivotalConf; // ivar: _s2cPivotalConf
@property (retain) NSXPCConnection *s2cXpcConnection; // ivar: _s2cXpcConnection


-(void)initData;


@end


#endif