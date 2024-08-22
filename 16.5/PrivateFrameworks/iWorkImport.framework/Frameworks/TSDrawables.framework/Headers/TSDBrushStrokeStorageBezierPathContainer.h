// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDBRUSHSTROKESTORAGEBEZIERPATHCONTAINER_H
#define TSDBRUSHSTROKESTORAGEBEZIERPATHCONTAINER_H

@class TSUBezierPath;

#import <Foundation/Foundation.h>


@interface TSDBrushStrokeStorageBezierPathContainer : NSObject

@property (readonly, nonatomic) TSUBezierPath *originalPath; // ivar: _originalPath
@property (readonly, nonatomic) TSUBezierPath *pathWithPossibleSmoothing; // ivar: _pathWithPossibleSmoothing


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithOriginalPath:(id)arg0 pathWithPossibleSmoothing:(id)arg1 ;


@end


#endif