// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUISETTINGSTABLEVIEWCELL_H
#define SKUISETTINGSTABLEVIEWCELL_H

@class UITableViewCell, UIImageView;


#import "SKUISettingDescriptionView.h"

@interface SKUISettingsTableViewCell : UITableViewCell {
    UIEdgeInsets _contentInset;
    UIImageView *_disclosureChevron;
    BOOL _hasDisclosureChevron;
    SKUISettingDescriptionView *_settingDescriptionView;
}


@property (readonly, nonatomic) SKUISettingDescriptionView *settingDescriptionView;


-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)displaySettingDescriptionView:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif