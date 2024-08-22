// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIPLAYBACKREPORTERSESSION_H
#define VUIPLAYBACKREPORTERSESSION_H

@class NSMutableDictionary, NSString;
@protocol TVPPlayback;

#import <Foundation/Foundation.h>


@interface VUIPlaybackReporterSession : NSObject {
    NSMutableDictionary *_metadata;
    os_unfair_lock_s _metadataLock;
}


@property (readonly, nonatomic) NSString *UUID; // ivar: _UUID
@property (retain, nonatomic) id *context; // ivar: _context
@property (weak, nonatomic) NSObject<TVPPlayback> *player; // ivar: _player
@property (nonatomic) BOOL reportingEnabled; // ivar: _reportingEnabled


+(id)transitionReasonForMediaControllerStartReason:(id)arg0 autoStart:(id)arg1 ;
+(id)transitionReasonForMediaControllerStopReason:(id)arg0 autoStop:(id)arg1 ;
+(id)transitionTypeForMediaControllerAutoTransition:(id)arg0 ;
-(id)consumeMetadataForKey:(id)arg0 ;
-(id)consumeStartReason;
-(id)consumeStartType;
-(id)consumeStopReason;
-(id)consumeStopType;
-(id)description;
-(id)initWithPlayer:(id)arg0 context:(id)arg1 ;
-(id)metadataForKey:(id)arg0 ;
-(void)setMetadata:(id)arg0 forKey:(id)arg1 ;


@end


#endif