// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSTATUSDOMAINDATACHANGELOG_H
#define STSTATUSDOMAINDATACHANGELOG_H

@class NSOrderedSet, NSDictionary, BSIntegerSet;

#import <Foundation/Foundation.h>


@interface STStatusDomainDataChangeLog : NSObject {
    NSOrderedSet *_sortedRecordKeys;
    NSDictionary *_recordsByKey;
}


@property (readonly, nonatomic) BSIntegerSet *domainsWithData;


-(id)currentDataForDomain:(NSUInteger)arg0 ;
-(id)initWithRecordKeys:(id)arg0 ;
-(id)recordForKey:(id)arg0 ;


@end


#endif