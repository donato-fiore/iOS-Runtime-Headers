// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UILISTCONTENTIMAGEVIEW_H
#define _UILISTCONTENTIMAGEVIEW_H



#import "UIImageView.h"
#import "UIColor.h"

@interface _UIListContentImageView : UIImageView {
    BOOL _hadStroke;
}


@property (retain, nonatomic, setter=_setStrokeColor:) UIColor *_strokeColor; // ivar: _strokeColor
@property (nonatomic, setter=_setStrokeWidth:) CGFloat _strokeWidth; // ivar: _strokeWidth


-(void)_updateStroke;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif