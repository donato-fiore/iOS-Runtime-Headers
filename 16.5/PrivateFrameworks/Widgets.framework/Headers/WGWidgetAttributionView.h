// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WGWIDGETATTRIBUTIONVIEW_H
#define WGWIDGETATTRIBUTIONVIEW_H

@class UITextView, NSMutableAttributedString, UIColor;



@interface WGWidgetAttributionView : UITextView {
    NSMutableAttributedString *_widgetAttributedString;
}


@property (retain, nonatomic) UIColor *legibilityTextColor; // ivar: _legibilityTextColor


+(id)widgetAttributionIDsInOrder;
+(void)requestAttributedStringForIdentifier:(id)arg0 withHandler:(id)arg1 ;
-(id)_attributionBackgroundColor;
-(id)_attributionFont;
-(id)_paragraphStyle;
-(id)initWithWidgetAttributedString:(id)arg0 ;
-(void)_configureAttributedString;
-(void)layoutSubviews;


@end


#endif