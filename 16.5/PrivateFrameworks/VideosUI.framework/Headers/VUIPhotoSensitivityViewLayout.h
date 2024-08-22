// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIPHOTOSENSITIVITYVIEWLAYOUT_H
#define VUIPHOTOSENSITIVITYVIEWLAYOUT_H

@class TVViewLayout, UIColor;


#import "VUITextLayout.h"

@interface VUIPhotoSensitivityViewLayout : TVViewLayout

@property (nonatomic) CGFloat descriptionCornerRadius; // ivar: _descriptionCornerRadius
@property (readonly, nonatomic) VUITextLayout *descriptionLayout; // ivar: _descriptionLayout
@property (nonatomic) UIEdgeInsets descriptionMargin; // ivar: _descriptionMargin
@property (nonatomic) CGFloat descriptionWidth; // ivar: _descriptionWidth
@property (readonly, nonatomic) UIColor *dividerColor; // ivar: _dividerColor
@property (nonatomic) UIEdgeInsets dividerMargin; // ivar: _dividerMargin
@property (nonatomic) CGSize dividerSize; // ivar: _dividerSize
@property (nonatomic) UIEdgeInsets logoMargin; // ivar: _logoMargin
@property (nonatomic) CGSize logoSize; // ivar: _logoSize
@property (readonly, nonatomic) VUITextLayout *portraitDescriptionLayout; // ivar: _portraitDescriptionLayout
@property (nonatomic) UIEdgeInsets portraitDescriptionMargin; // ivar: _portraitDescriptionMargin
@property (nonatomic) CGFloat portraitDescriptionWidth; // ivar: _portraitDescriptionWidth
@property (nonatomic) UIEdgeInsets portraitDividerMargin; // ivar: _portraitDividerMargin
@property (nonatomic) CGSize portraitDividerSize; // ivar: _portraitDividerSize
@property (nonatomic) UIEdgeInsets portraitLogoMargin; // ivar: _portraitLogoMargin
@property (nonatomic) CGSize portraitLogoSize; // ivar: _portraitLogoSize
@property (nonatomic) UIEdgeInsets portraitMargin; // ivar: _portraitMargin


-(id)init;


@end


#endif