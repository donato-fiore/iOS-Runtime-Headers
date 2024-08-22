// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVRCRAPPORTMEDIAEVENTSMANAGER_H
#define TVRCRAPPORTMEDIAEVENTSMANAGER_H

@class NSMutableSet, RPMediaControlSession, NSSet;

#import <Foundation/Foundation.h>


@interface TVRCRapportMediaEventsManager : NSObject

@property (nonatomic) int currentSetting; // ivar: _currentSetting
@property (copy, nonatomic) id *eventHandler; // ivar: _eventHandler
@property (retain, nonatomic) NSMutableSet *mediaCommands; // ivar: _mediaCommands
@property (retain, nonatomic) RPMediaControlSession *mediaSession; // ivar: _mediaSession
@property (readonly) NSSet *supportedMediaCommands;
@property (retain, nonatomic) NSSet *volumeCommands; // ivar: _volumeCommands
@property (readonly) BOOL volumeSupported;


-(id)initWithCompanionLinkClient:(id)arg0 eventHandler:(id)arg1 ;
-(id)supportedCaptionEvents;
-(int)_captionSettingForButtonEvent:(id)arg0 ;
-(int)_commandForMediaButtonEvent:(id)arg0 ;
-(void)_refreshCaptionState;
-(void)_setupMediaCommands:(NSUInteger)arg0 ;
-(void)invalidate;
-(void)sendMediaEvent:(id)arg0 ;


@end


#endif