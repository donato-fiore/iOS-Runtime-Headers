// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TMLCLONECONTEXT_H
#define TMLCLONECONTEXT_H

@class JSValue, NSString, JSContext;

#import <Foundation/Foundation.h>

#import "TMLMetaContext.h"
#import "TMLMetaObject.h"

@interface TMLCloneContext : NSObject

@property (nonatomic) JSValue *apiObject; // ivar: _apiObject
@property (copy, nonatomic) NSString *apiObjectKey; // ivar: _apiObjectKey
@property (nonatomic) JSContext *jsContext; // ivar: _jsContext
@property (readonly, nonatomic) TMLMetaContext *metaContext; // ivar: _metaContext
@property (readonly, nonatomic) TMLMetaObject *rootObject;


-(id)initWithMetaContext:(id)arg0 ;


@end


#endif