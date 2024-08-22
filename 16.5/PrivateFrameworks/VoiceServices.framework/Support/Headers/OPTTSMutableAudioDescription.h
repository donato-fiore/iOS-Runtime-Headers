// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OPTTSMUTABLEAUDIODESCRIPTION_H
#define OPTTSMUTABLEAUDIODESCRIPTION_H



#import "OPTTSAudioDescription.h"

@interface OPTTSMutableAudioDescription : OPTTSAudioDescription

@property (nonatomic) unsigned int bits_per_channel;
@property (nonatomic) unsigned int bytes_per_frame;
@property (nonatomic) unsigned int bytes_per_packet;
@property (nonatomic) unsigned int channels_per_frame;
@property (nonatomic) unsigned int format_flags;
@property (nonatomic) unsigned int format_id;
@property (nonatomic) unsigned int frames_per_packet;
@property (nonatomic) unsigned int reserved;
@property (nonatomic) CGFloat sample_rate;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif