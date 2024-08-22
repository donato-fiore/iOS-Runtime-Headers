// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUICOUNTDOWNVIEW_H
#define SKUICOUNTDOWNVIEW_H

@class UIView, NSTimer, UILabel, NSMutableArray, UIImageView, NSNumberFormatter, NSOperationQueue, UIImage;


#import "SKUICountdownViewTimerTarget.h"
#import "SKUIClientContext.h"
#import "SKUICountdown.h"

@interface SKUICountdownView : UIView {
    NSTimer *_timer;
    SKUICountdownViewTimerTarget *_timerTarget;
    UILabel *_dateDescriptionLabelDay;
    UILabel *_dateDescriptionLabelHour;
    UILabel *_dateDescriptionLabelMinute;
    UILabel *_dateDescriptionLabelSecond;
    UILabel *_dateLabelDay;
    UILabel *_dateLabelHour;
    UILabel *_dateLabelMinute;
    UILabel *_dateLabelSecond;
    NSMutableArray *_dateFlapLabels;
    NSMutableArray *_numberFlapLabels;
    NSMutableArray *_numberSeparatorLabels;
    UIImageView *_imageView;
    UILabel *_numberLabel;
    NSNumberFormatter *_numberFormatter;
    NSOperationQueue *_operationQueue;
    CGFloat _factor;
}


@property (retain, nonatomic) UIImage *backgroundImage;
@property (readonly, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, nonatomic) SKUICountdown *countdown; // ivar: _countdown


-(NSInteger)_currentValue;
-(id)_newDateDescriptionLabel;
-(id)_newDateLabel;
-(id)_newFlapLabelWithPosition:(NSInteger)arg0 ;
-(id)_newNumberSeparatorLabel;
-(id)initWithCountdown:(id)arg0 clientContext:(id)arg1 ;
-(void)_currentRemainingDays:(*NSInteger)arg0 hours:(*NSInteger)arg1 minutes:(*NSInteger)arg2 seconds:(*NSInteger)arg3 ;
-(void)_reload;
-(void)_reloadDateDescriptions:(BOOL)arg0 ;
-(void)_reloadFontSizes;
-(void)_reloadNumber;
-(void)_reloadNumberFlapped;
-(void)_reloadTime;
-(void)_reloadTimeFlapped;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)start;
-(void)stop;


@end


#endif