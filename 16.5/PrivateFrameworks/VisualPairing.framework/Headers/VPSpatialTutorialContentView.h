// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VPSPATIALTUTORIALCONTENTVIEW_H
#define VPSPATIALTUTORIALCONTENTVIEW_H

@class UIView, AVQueuePlayer, AVPlayerLooper, AVPlayerItem, AVPlayerLayer;



@interface VPSpatialTutorialContentView : UIView {
    int _mode;
    AVQueuePlayer *_playerStereo;
    AVQueuePlayer *_playerSpatial;
    AVPlayerLooper *_looperStereo;
    AVPlayerLooper *_looperSpatial;
    AVPlayerItem *_playerItemStereo;
    AVPlayerItem *_playerItemSpatial;
    AVPlayerLayer *_playerLayerStereo;
    AVPlayerLayer *_playerLayerSpatial;
    BOOL _playersPlaying;
    BOOL _playersStartTriggered;
    MediaContentStatus _spatialStatus;
    MediaContentStatus _stereoStatus;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 mode:(int)arg1 ;
-(id)initWithMode:(int)arg0 ;
-(int)mode;
-(void)dealloc;
-(void)initPlayerSpatial;
-(void)initPlayerStereo;
-(void)layoutSublayersOfLayer:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setMode:(int)arg0 ;
-(void)startPlayers;
-(void)stopPlayers;
-(void)syncPlayersWithRate:(float)arg0 ;
-(void)updatePlayersValuesBasedOnMode;


@end


#endif