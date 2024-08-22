// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBAPPLAYOUTOVERLAPPINGMODELCACHEKEYDISPLAYITEMRECORD_H
#define _SBAPPLAYOUTOVERLAPPINGMODELCACHEKEYDISPLAYITEMRECORD_H


#import <Foundation/Foundation.h>


@interface _SBAppLayoutOverlappingModelCacheKeyDisplayItemRecord : NSObject {
    NSUInteger _hash;
}


@property (readonly, nonatomic) CGPoint center; // ivar: _center
@property (readonly, nonatomic) NSInteger contentOrientation; // ivar: _contentOrientation
@property (readonly, nonatomic) NSInteger occlusionState; // ivar: _occlusionState
@property (readonly, nonatomic) SBDisplayItemAttributedSize size; // ivar: _size
@property (readonly, nonatomic) NSInteger sizingPolicy; // ivar: _sizingPolicy


+(id)itemRecordForLayoutAttributes:(id)arg0 containerBounds:(struct CGRect )arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithRecordForLayoutAttributes:(id)arg0 containerBounds:(struct CGRect )arg1 ;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_appendToDescriptionBuilder:(id)arg0 ;
-(void)_appendToHashBuilder:(id)arg0 ;


@end


#endif