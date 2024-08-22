// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBDISPLAYITEMFLEXIBLEGRID_H
#define _SBDISPLAYITEMFLEXIBLEGRID_H

@class NSArray, NSString;
@protocol _SBDisplayItemGridProvider;

#import <Foundation/Foundation.h>

#import "SBSwitcherChamoisSettings.h"
#import "SBSwitcherChamoisLayoutAttributes.h"

@interface _SBDisplayItemFlexibleGrid : NSObject <_SBDisplayItemGridProvider>

 {
    SBSwitcherChamoisSettings *_settings;
    SBSwitcherChamoisLayoutAttributes *_chamoisLayoutAttributes;
    CGRect _bounds;
    NSArray *_widths;
    NSArray *_heights;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_gridHeightsForSafeHeight:(CGFloat)arg0 minimumHeight:(CGFloat)arg1 ;
-(id)_gridWidthsForSafeWidth:(CGFloat)arg0 minimumWidth:(CGFloat)arg1 ;
-(id)allHeights;
-(id)allWidths;
-(id)initWithBounds:(struct CGRect )arg0 screenScale:(CGFloat)arg1 chamoisLayoutAttributes:(id)arg2 ;
-(struct CGSize )maxSize;
-(struct CGSize )minSize;
-(struct CGSize )nearestGridSizeForSize:(struct CGSize )arg0 countOnStage:(NSUInteger)arg1 ;
-(struct CGSize )sizeAtIndexFromFullWidthForBounds:(NSUInteger)arg0 ;
-(void)_buildGridWithScreenScale:(CGFloat)arg0 ;


@end


#endif