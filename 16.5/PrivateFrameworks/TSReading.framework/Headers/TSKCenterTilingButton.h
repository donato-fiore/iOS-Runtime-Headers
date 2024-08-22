// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKCENTERTILINGBUTTON_H
#define TSKCENTERTILINGBUTTON_H

@class UIButton, UIImage;



@interface TSKCenterTilingButton : UIButton {
    UIImage *mLeftCapImage_Normal;
    UIImage *mLeftCapImage_Disabled;
    UIImage *mLeftCapImage_Active;
    UIImage *mLeftCapImage_Selected;
    UIImage *mLeftCapImage_ActiveSelected;
    UIImage *mRightCapImage_Normal;
    UIImage *mRightCapImage_Disabled;
    UIImage *mRightCapImage_Active;
    UIImage *mRightCapImage_Selected;
    UIImage *mRightCapImage_ActiveSelected;
    UIImage *mCenterTileImage_Normal;
    UIImage *mCenterTileImage_Disabled;
    UIImage *mCenterTileImage_Active;
    UIImage *mCenterTileImage_Selected;
    UIImage *mCenterTileImage_ActiveSelected;
    UIImage *mLeftCenterTileImage_Normal;
    UIImage *mLeftCenterTileImage_Disabled;
    UIImage *mLeftCenterTileImage_Active;
    UIImage *mLeftCenterTileImage_Selected;
    UIImage *mLeftCenterTileImage_ActiveSelected;
    UIImage *mRightCenterTileImage_Normal;
    UIImage *mRightCenterTileImage_Disabled;
    UIImage *mRightCenterTileImage_Active;
    UIImage *mRightCenterTileImage_Selected;
    UIImage *mRightCenterTileImage_ActiveSelected;
    int mTilingType;
}




-(id)centerTileImageForState:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 andTilingType:(int)arg1 ;
-(id)leftCapImageForState:(NSUInteger)arg0 ;
-(id)leftCenterTileImageForState:(NSUInteger)arg0 ;
-(id)rightCapImageForState:(NSUInteger)arg0 ;
-(id)rightCenterTileImageForState:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)p_resetBackgroundImageForState:(NSUInteger)arg0 ;
-(void)p_tileButtedToCapLtoR:(id)arg0 inRect:(struct CGRect )arg1 ;
-(void)p_tileButtedToCapRtoL:(id)arg0 inRect:(struct CGRect )arg1 ;
-(void)p_tileHorizCenterOutwardwithLeft:(id)arg0 andRight:(id)arg1 inRect:(struct CGRect )arg2 ;
-(void)p_tileSimple:(id)arg0 inRect:(struct CGRect )arg1 ;
-(void)setCenterTileImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setLeftCapImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setLeftCenterTileImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setRightCapImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setRightCenterTileImage:(id)arg0 forState:(NSUInteger)arg1 ;


@end


#endif