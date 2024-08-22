// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI21CANONICALINFOCARDVIEW_H
#define _TTC8VIDEOSUI21CANONICALINFOCARDVIEW_H

@class VUIImageView;


#import "VUIBaseView.h"
#import "FocusableTextView.h"
#import "VUILabel.h"
#import "_TtC8VideosUI20TomatometerTableView.h"

@interface _TtC8VideosUI21CanonicalInfoCardView : VUIBaseView {
    ? layout;
    ? titleLabel;
    ? subtitleLabel;
    ? descriptionLabel;
    ? imageView;
    ? tableView;
}


@property (nonatomic, readonly) FocusableTextView *accessibilityDescriptionLabel;
@property (nonatomic, readonly) VUIImageView *accessibilityImageView;
@property (nonatomic, readonly) VUILabel *accessibilitySubtitleLabel;
@property (nonatomic, readonly) _TtC8VideosUI20TomatometerTableView *accessibilityTableView;
@property (nonatomic, readonly) VUILabel *accessibilityTitleLabel;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(void)vui_prepareForReuse;


@end


#endif