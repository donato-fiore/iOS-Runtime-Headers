// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVRMSCONTROLINTERFACE_H
#define TVRMSCONTROLINTERFACE_H


#import <Foundation/Foundation.h>


@interface TVRMSControlInterface : NSObject

@property (nonatomic) BOOL supportsDirectionalControl; // ivar: _supportsDirectionalControl
@property (nonatomic) BOOL supportsSpeakerSelection; // ivar: _supportsSpeakerSelection
@property (nonatomic) BOOL supportsVolumeControl; // ivar: _supportsVolumeControl


-(id)initWithProtobuf:(id)arg0 ;
-(id)protobuf;


@end


#endif