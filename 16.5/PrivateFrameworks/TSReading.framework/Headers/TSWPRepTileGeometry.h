// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPREPTILEGEOMETRY_H
#define TSWPREPTILEGEOMETRY_H

@class NSString;
@protocol TSDTileGeometryProviding;

#import <Foundation/Foundation.h>


@interface TSWPRepTileGeometry : NSObject <TSDTileGeometryProviding>

 {
    vector<TSWPRepBoundsAnalyzer::Info, std::allocator<TSWPRepBoundsAnalyzer::Info>> _infos;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize maxTileSize; // ivar: _maxTileSize
@property (readonly) Class superclass;
@property (nonatomic) BOOL tileGeometryDirty; // ivar: _tileGeometryDirty


-(BOOL)updateWithLayer:(id)arg0 scale:(CGFloat)arg1 columns:(id)arg2 ;
-(NSUInteger)tileGeometryCountWithLayer:(id)arg0 ;
-(struct CGRect )tileGeometryRectWithLayer:(id)arg0 atIndex:(NSUInteger)arg1 mask:(*unsigned int)arg2 ;
-(void)dealloc;
-(void)tileGeometryAddVisibileIndices:(id)arg0 withLayer:(id)arg1 visibleBounds:(struct CGRect )arg2 ;
-(void)tileGeometryConfigureWithLayer:(id)arg0 tileLayer:(id)arg1 atIndex:(NSUInteger)arg2 ;


@end


#endif