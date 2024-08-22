// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPKTIPCONTENTTABLEVIEWCELL_H
#define TPKTIPCONTENTTABLEVIEWCELL_H

@class UITableViewCell;
@protocol TPKTipContentReusableView;


#import "TPKContentView.h"

@interface TPKTipContentTableViewCell : UITableViewCell <TPKTipContentReusableView>



@property (nonatomic, readonly) TPKContentView *tipContentView;
@property (nonatomic, retain) TPKContentView *tipView; // ivar: tipView


-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_bridgedUpdateConfigurationUsingState:(id)arg0 ;
-(void)prepareForReuse;
-(void)setContent:(id)arg0 contentController:(id)arg1 ;


@end


#endif