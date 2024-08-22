// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIDEBUGMETRICSEVENTCELL_H
#define VUIDEBUGMETRICSEVENTCELL_H

@class UITableViewCell, NSString, UIImage, UIImageView;


#import "VUILabel.h"
#import "VUITextLayout.h"
#import "VUISeparatorView.h"

@interface VUIDebugMetricsEventCell : UITableViewCell

@property (retain, nonatomic) VUILabel *eventTypeLabel; // ivar: _eventTypeLabel
@property (retain, nonatomic) VUITextLayout *eventTypeLabelLayout; // ivar: _eventTypeLabelLayout
@property (copy, nonatomic) NSString *eventTypeLabelStr; // ivar: _eventTypeLabelStr
@property (retain, nonatomic) VUISeparatorView *separatorView; // ivar: _separatorView
@property (retain, nonatomic) VUILabel *subhead1Label; // ivar: _subhead1Label
@property (retain, nonatomic) VUITextLayout *subhead1LabelLayout; // ivar: _subhead1LabelLayout
@property (copy, nonatomic) NSString *subhead1LabelStr; // ivar: _subhead1LabelStr
@property (retain, nonatomic) VUILabel *subhead2Label; // ivar: _subhead2Label
@property (retain, nonatomic) VUITextLayout *subhead2LabelLayout; // ivar: _subhead2LabelLayout
@property (copy, nonatomic) NSString *subhead2LabelStr; // ivar: _subhead2LabelStr
@property (retain, nonatomic) VUILabel *subhead3Label; // ivar: _subhead3Label
@property (retain, nonatomic) VUITextLayout *subhead3LabelLayout; // ivar: _subhead3LabelLayout
@property (copy, nonatomic) NSString *subhead3LabelStr; // ivar: _subhead3LabelStr
@property (copy, nonatomic) UIImage *tabImage;
@property (retain, nonatomic) UIImageView *tabImageView; // ivar: _tabImageView
@property (copy, nonatomic) NSString *tabName; // ivar: _tabName
@property (retain, nonatomic) VUILabel *tabNameLabel; // ivar: _tabNameLabel
@property (retain, nonatomic) VUITextLayout *tabNameLabelLayout; // ivar: _tabNameLabelLayout


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif