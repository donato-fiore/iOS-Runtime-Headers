// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TITYPINGSESSIONPARAMS_H
#define TITYPINGSESSIONPARAMS_H

@class NSArray, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface TITypingSessionParams : NSObject

@property (readonly, nonatomic) NSArray *activeInputModes; // ivar: _activeInputModes
@property (readonly, nonatomic) NSInteger assetAvailabilityStatus; // ivar: _assetAvailabilityStatus
@property (readonly, nonatomic) NSDictionary *testingParameters; // ivar: _testingParameters
@property (readonly, nonatomic) NSString *wordSeparator; // ivar: _wordSeparator


-(id)initWithActiveInputModes:(id)arg0 wordSeparator:(id)arg1 testingParameters:(id)arg2 assetAvailabilityStatus:(NSInteger)arg3 ;


@end


#endif