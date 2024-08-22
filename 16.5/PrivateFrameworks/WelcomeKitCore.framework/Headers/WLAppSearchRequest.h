// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLAPPSEARCHREQUEST_H
#define WLAPPSEARCHREQUEST_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WLAppSearchRequest : NSObject

@property (copy, nonatomic) NSString *identifiers; // ivar: _identifiers


-(id)initWithAndroidIdentifiers:(id)arg0 ;
-(void)search:(id)arg0 ;


@end


#endif