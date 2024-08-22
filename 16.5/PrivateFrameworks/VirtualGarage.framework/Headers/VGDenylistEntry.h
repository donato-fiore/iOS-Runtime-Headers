// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGDENYLISTENTRY_H
#define VGDENYLISTENTRY_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface VGDenylistEntry : NSObject {
    NSNumber *_modelId;
    NSArray *_firmwareIds;
    NSArray *_years;
    NSArray *_models;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSupersetOfEntry:(id)arg0 ;
-(id)description;
-(id)initWithModelId:(id)arg0 firmwareIds:(id)arg1 years:(id)arg2 models:(id)arg3 ;


@end


#endif