// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIPLAYER_H
#define VUIPLAYER_H

@class TVPPlayer;



@interface VUIPlayer : TVPPlayer



+(id)savedPreferredAudioLanguageCode;
+(void)initialize;
+(void)updateSupplementaryAvailableAudioLanguageCodes:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(void)_configurePlayerForCurrentNetworkSettingsAndMediaItem;
-(void)_currentMediaItemDidChange:(id)arg0 ;
-(void)_videoPlaybackSettingsDidChange:(id)arg0 ;
-(void)dealloc;


@end


#endif