// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIPOSTPLAYUPSELLCONFIG_H
#define VUIPOSTPLAYUPSELLCONFIG_H


#import <Foundation/Foundation.h>


@interface VUIPostPlayUpsellConfig : NSObject

@property (nonatomic) BOOL isUpsellLimitedPerChannel; // ivar: _isUpsellLimitedPerChannel
@property (nonatomic) BOOL isUpsellLimitedPerShow; // ivar: _isUpsellLimitedPerShow
@property (nonatomic) BOOL isUpsellOnPIPPlaybackExitEnabled; // ivar: _isUpsellOnPIPPlaybackExitEnabled
@property (nonatomic) BOOL isUpsellOnPlaybackExitDisabled; // ivar: _isUpsellOnPlaybackExitDisabled
@property (nonatomic) CGFloat minPlaybackProgressPercentage; // ivar: _minPlaybackProgressPercentage
@property (nonatomic) CGFloat upsellCountDurationPerChannel; // ivar: _upsellCountDurationPerChannel
@property (nonatomic) CGFloat upsellCountDurationPerShow; // ivar: _upsellCountDurationPerShow
@property (nonatomic) NSUInteger upsellMaxCountPerChannel; // ivar: _upsellMaxCountPerChannel
@property (nonatomic) NSUInteger upsellMaxCountPerShow; // ivar: _upsellMaxCountPerShow


+(id)sharedInstance;
-(BOOL)_isFullScreenPlaybackUIShown;
-(BOOL)_isHistoryArrayFull:(id)arg0 forMaxCount:(NSUInteger)arg1 inDurationWindow:(CGFloat)arg2 ;
-(BOOL)canShowUpsellForMediaItem:(id)arg0 withElapsedTime:(CGFloat)arg1 ;
-(id)_cleanupHistory:(id)arg0 atCurrentDate:(id)arg1 isShow:(BOOL)arg2 ;
-(id)_trimHistoryArray:(id)arg0 forMaxCount:(NSUInteger)arg1 inDurationWindow:(CGFloat)arg2 atCurrentDate:(id)arg3 ;
-(void)_recordUpsellHistoryForShowId:(id)arg0 onChannelId:(id)arg1 ;
-(void)configureUsingDictionary:(id)arg0 ;
-(void)disableUpsellOnPlaybackExit:(BOOL)arg0 ;
-(void)enableUpsellOnPIPPlaybackExit:(BOOL)arg0 ;
-(void)setChannelLevelUpsellRateOfMaxCount:(NSUInteger)arg0 inHours:(CGFloat)arg1 ;
-(void)setShowLevelUpsellRateOfMaxCount:(NSUInteger)arg0 inHours:(CGFloat)arg1 ;


@end


#endif