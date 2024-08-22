// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DSESSIONLOADRESOURCERESULT_H
#define TSCH3DSESSIONLOADRESOURCERESULT_H


#import <Foundation/Foundation.h>

#import "TSCH3DResourceHandle.h"
#import "TSCH3DResource.h"

@interface TSCH3DSessionLoadResourceResult : NSObject

@property (nonatomic) BOOL failed; // ivar: _failed
@property (nonatomic) BOOL generated; // ivar: _generated
@property (retain, nonatomic) TSCH3DResourceHandle *handle; // ivar: _handle
@property (retain, nonatomic) TSCH3DResource *resource; // ivar: _resource
@property (nonatomic) BOOL uploaded; // ivar: _uploaded


-(BOOL)exists;
-(id)init;


@end


#endif