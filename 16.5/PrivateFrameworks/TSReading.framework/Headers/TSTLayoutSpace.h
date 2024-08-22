// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTLAYOUTSPACE_H
#define TSTLAYOUTSPACE_H


#import <Foundation/Foundation.h>

#import "TSTCoordinateArray.h"
#import "TSTLayoutSpaceBundle.h"
#import "TSTLayout.h"
#import "TSTMasterLayout.h"

@interface TSTLayoutSpace : NSObject {
    ? mInvalidFlags;
    ? mGridRange;
    TSTCoordinateArray *mHeaderRowColumnCoordinates;
    TSTCoordinateArray *mBodyColumnCoordinates;
    TSTCoordinateArray *mHeaderColumnRowCoordinates;
    TSTCoordinateArray *mBodyRowCoordinates;
    CGRect mCachedFrame;
    CGRect mCachedAlignedFrame;
    CGRect mCachedStrokeFrame;
    CGRect mCachedAlignedStrokeFrame;
    _opaque_pthread_rwlock_t mLock;
}


@property (readonly, nonatomic) TSTLayoutSpaceBundle *bundle; // ivar: mBundle
@property (nonatomic) BOOL drawBlackAndWhite; // ivar: mDrawBlackAndWhite
@property (nonatomic) BOOL drawPreventAntialias; // ivar: mDrawPreventAntialias
@property (nonatomic) BOOL headerColumnsRepeat; // ivar: mHeaderColumnsRepeat
@property (nonatomic) BOOL headerRowsRepeat; // ivar: mHeaderRowsRepeat
@property (readonly, nonatomic) BOOL isColumns;
@property (readonly, nonatomic) BOOL isCorner;
@property (readonly, nonatomic) BOOL isFrozen;
@property (readonly, nonatomic) BOOL isMain;
@property (readonly, nonatomic) BOOL isRepeat;
@property (readonly, nonatomic) BOOL isRows;
@property (readonly, nonatomic) TSTLayout *layout;
@property (readonly, nonatomic) BOOL layoutDirectionIsLeftToRight; // ivar: mLayoutDirectionIsLeftToRight
@property (readonly, nonatomic) int layoutSpaceType; // ivar: mLayoutSpaceType
@property (readonly, nonatomic) TSTMasterLayout *masterLayout;
@property (nonatomic) CGPoint tableOffset; // ivar: mTableOffset
@property (nonatomic) CGAffineTransform transformFromCanvas; // ivar: mTransformFromCanvas
@property (nonatomic) CGAffineTransform transformFromDevice; // ivar: mTransformFromDevice
@property (nonatomic) CGAffineTransform transformToCanvas; // ivar: mTransformToCanvas
@property (nonatomic) CGAffineTransform transformToDevice; // ivar: mTransformToDevice
@property (nonatomic) CGFloat viewScale; // ivar: mViewScale


-(BOOL)p_getLayoutDirectionLeftToRight;
-(id)description;
-(id)initWithLayoutSpaceBundle:(id)arg0 type:(int)arg1 ;
-(int)validate:(id)arg0 ;
-(int)validateCoordinateCache:(id)arg0 ;
-(int)validateTableOffset:(id)arg0 ;
-(void)dealloc;
-(void)invalidateCoordinates;
-(void)invalidateTableOffset;
-(void)lockForRead;
-(void)lockForWrite;
-(void)unlock;
-(void)validateCachedFrames;


@end


#endif