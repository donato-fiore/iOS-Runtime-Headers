// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFTRACKERDOMAIN_H
#define SFTRACKERDOMAIN_H

@class NSManagedObject, NSString;



@interface SFTrackerDomain : NSManagedObject

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *domainOwner;


+(id)entityName;
+(id)fetchRequest;


@end


#endif