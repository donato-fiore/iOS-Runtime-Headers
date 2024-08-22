// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DGEOMETRYRESOURCE_H
#define TSCH3DGEOMETRYRESOURCE_H


#import <Foundation/Foundation.h>

#import "TSCH3DGeometryArrays.h"
#import "TSCH3DGeometry.h"
#import "TSCH3DResource.h"

@interface TSCH3DGeometryResource : NSObject

@property (readonly, copy, nonatomic) TSCH3DGeometryArrays *arrays; // ivar: _arrays
@property (readonly, retain, nonatomic) TSCH3DGeometry *geometry; // ivar: _geometry
@property (readonly, nonatomic) BOOL hasArrays;
@property (readonly, retain, nonatomic) TSCH3DResource *resource; // ivar: _resource
@property (nonatomic) int type; // ivar: _type


+(id)resourceWithType:(int)arg0 resource:(id)arg1 ;
+(id)resourceWithType:(int)arg0 resource:(id)arg1 arrays:(id)arg2 geometry:(id)arg3 ;
-(id)initWithType:(int)arg0 resource:(id)arg1 ;
-(id)initWithType:(int)arg0 resource:(id)arg1 arrays:(id)arg2 geometry:(id)arg3 ;
-(void)submitCapWithProcessor:(id)arg0 ;
-(void)submitNoneWithProcessor:(id)arg0 ;
-(void)submitToProcessor:(id)arg0 withPortion:(int)arg1 ;
-(void)submitWithProcessor:(id)arg0 ;


@end


#endif