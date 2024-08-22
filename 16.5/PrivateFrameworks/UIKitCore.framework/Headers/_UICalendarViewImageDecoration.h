// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICALENDARVIEWIMAGEDECORATION_H
#define _UICALENDARVIEWIMAGEDECORATION_H



#import "UICalendarViewDecoration.h"
#import "UIColor.h"
#import "UIImage.h"

@interface _UICalendarViewImageDecoration : UICalendarViewDecoration

@property (readonly, nonatomic) UIColor *color; // ivar: _color
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) NSInteger size; // ivar: _size


-(id)_decorationViewForReuseView:(id)arg0 ;
-(id)_decorationViewReusableKey;
-(id)defaultImage;
-(id)initWithImage:(id)arg0 accentColor:(id)arg1 size:(NSInteger)arg2 ;
-(id)initWithImage:(id)arg0 color:(id)arg1 size:(NSInteger)arg2 ;


@end


#endif