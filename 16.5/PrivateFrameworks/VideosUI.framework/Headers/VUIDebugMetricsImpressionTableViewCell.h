// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIDEBUGMETRICSIMPRESSIONTABLEVIEWCELL_H
#define VUIDEBUGMETRICSIMPRESSIONTABLEVIEWCELL_H

@class UITableViewCell, NSString;


#import "VUILabel.h"

@interface VUIDebugMetricsImpressionTableViewCell : UITableViewCell

@property (retain, nonatomic) VUILabel *idLabel; // ivar: _idLabel
@property (copy, nonatomic) NSString *idStr;
@property (copy, nonatomic) NSString *idType;
@property (retain, nonatomic) VUILabel *idTypeLabel; // ivar: _idTypeLabel
@property (copy, nonatomic) NSString *impressionId;
@property (retain, nonatomic) VUILabel *impressionIdLabel; // ivar: _impressionIdLabel
@property (copy, nonatomic) NSString *impressionIndex;
@property (retain, nonatomic) VUILabel *impressionIndexLabel; // ivar: _impressionIndexLabel
@property (copy, nonatomic) NSString *impressionParentId;
@property (retain, nonatomic) VUILabel *impressionParentIdLabel; // ivar: _impressionParentIdLabel
@property (copy, nonatomic) NSString *impressionParentName;
@property (retain, nonatomic) VUILabel *impressionParentNameLabel; // ivar: _impressionParentNameLabel
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) VUILabel *nameLabel; // ivar: _nameLabel
@property (retain, nonatomic) VUILabel *staticIDLabel; // ivar: _staticIDLabel
@property (retain, nonatomic) VUILabel *staticImpressionIdLabel; // ivar: _staticImpressionIdLabel
@property (retain, nonatomic) VUILabel *staticImpressionIndexLabel; // ivar: _staticImpressionIndexLabel
@property (retain, nonatomic) VUILabel *staticImpressionParentLabel; // ivar: _staticImpressionParentLabel
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) VUILabel *typeLabel; // ivar: _typeLabel


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif