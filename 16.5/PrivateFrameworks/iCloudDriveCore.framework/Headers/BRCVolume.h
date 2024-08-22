// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCVOLUME_H
#define BRCVOLUME_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BRCVolume : NSObject {
    statfs _stfs;
}


@property (readonly, nonatomic) int deviceID; // ivar: _deviceID
@property (readonly, nonatomic) NSString *fsTypeName;
@property (readonly, nonatomic) NSString *mountPath;


-(BOOL)setUpForSession:(id)arg0 error:(*id)arg1 ;
-(int)_setUpForStatfs:(struct statfs )arg0 ;


@end


#endif