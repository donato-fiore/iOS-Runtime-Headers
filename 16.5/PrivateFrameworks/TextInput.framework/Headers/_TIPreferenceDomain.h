// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TIPREFERENCEDOMAIN_H
#define _TIPREFERENCEDOMAIN_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TIPreferenceDomain : NSObject

@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (nonatomic) CGFloat lastSynchronizedTime; // ivar: _lastSynchronizedTime
@property (nonatomic) BOOL needsGetSync; // ivar: _needsGetSync
@property (nonatomic) BOOL needsSetSync; // ivar: _needsSetSync
@property (retain, nonatomic) NSString *notification; // ivar: _notification


+(id)domainWithName:(id)arg0 notification:(id)arg1 ;


@end


#endif