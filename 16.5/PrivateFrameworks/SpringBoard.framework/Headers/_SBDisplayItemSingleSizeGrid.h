// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBDISPLAYITEMSINGLESIZEGRID_H
#define _SBDISPLAYITEMSINGLESIZEGRID_H

@class NSString;
@protocol _SBDisplayItemGridProvider;

#import <Foundation/Foundation.h>


@interface _SBDisplayItemSingleSizeGrid : NSObject <_SBDisplayItemGridProvider>

 {
    CGSize _size;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)allHeights;
-(id)allWidths;
-(id)initWithSize:(struct CGSize )arg0 ;
-(struct CGSize )maxSize;
-(struct CGSize )minSize;
-(struct CGSize )nearestGridSizeForSize:(struct CGSize )arg0 countOnStage:(NSUInteger)arg1 ;
-(struct CGSize )sizeAtIndexFromFullWidthForBounds:(NSUInteger)arg0 ;


@end


#endif