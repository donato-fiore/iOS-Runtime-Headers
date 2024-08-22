// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSSAVEDTIPENTRY_H
#define TPSSAVEDTIPENTRY_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface TPSSavedTipEntry : NSObject {
    ? savedDate;
    ? lastUsedVersion;
}


@property (nonatomic, copy) NSString *lastUsedVersion;
@property (nonatomic, copy) NSDate *savedDate;


-(id)init;
-(id)initWithSavedDate:(id)arg0 lastUsedVersion:(id)arg1 ;


@end


#endif