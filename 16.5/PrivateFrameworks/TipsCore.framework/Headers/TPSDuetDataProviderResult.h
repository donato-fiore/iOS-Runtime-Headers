// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSDUETDATAPROVIDERRESULT_H
#define TPSDUETDATAPROVIDERRESULT_H

@class NSDate, _DKEvent, NSString;

#import <Foundation/Foundation.h>


@interface TPSDuetDataProviderResult : NSObject

@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) CGFloat creationDelay;
@property (readonly, nonatomic) NSDate *endDate;
@property (retain, nonatomic) _DKEvent *event; // ivar: _event
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDate *localCreationDate;
@property (readonly, nonatomic, getter=isRemoteEvent) BOOL remoteEvent;
@property (readonly, nonatomic) NSDate *startDate;


-(id)debugDescription;
-(id)description;


@end


#endif