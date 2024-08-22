// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKAPPLICATIONICLOUDPREFERENCES_H
#define TSKAPPLICATIONICLOUDPREFERENCES_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface TSKApplicationICloudPreferences : NSObject

@property (nonatomic) NSUInteger iWorkAuthorColorIndex;
@property (copy, nonatomic) NSString *iWorkAuthorName;
@property (readonly, nonatomic) NSString *iWorkAuthorPrivateID; // ivar: _iWorkAuthorPrivateID
@property (readonly, nonatomic) NSArray *iWorkAuthorPrivateIDs;
@property (readonly, nonatomic) NSArray *iWorkAuthorPrivateIDsAndMetadata;


-(id)init;


@end


#endif