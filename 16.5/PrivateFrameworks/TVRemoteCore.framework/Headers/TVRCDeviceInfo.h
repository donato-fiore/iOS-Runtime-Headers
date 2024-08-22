// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVRCDEVICEINFO_H
#define TVRCDEVICEINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TVRCDeviceInfo : NSObject {
    NSString *_mediaRemoteID;
    NSString *_airplayID;
}


@property (readonly) NSString *airplayID;
@property (readonly) NSString *mediaRemoteID;


-(BOOL)containsID:(id)arg0 ;
-(id)description;
-(void)_populateValidIdentifiers:(id)arg0 ;


@end


#endif