// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSSOFTWAREUPDATESRESPONSE_H
#define SSSOFTWAREUPDATESRESPONSE_H

@class NSError, NSArray;

#import <Foundation/Foundation.h>


@interface SSSoftwareUpdatesResponse : NSObject {
    NSError *_error;
    BOOL _failed;
    NSArray *_updateItems;
}


@property (readonly) NSError *error;
@property (readonly, getter=isFailed) BOOL failed;
@property (readonly) NSArray *updateItems;


-(id)copyUpdateItemDictionaries;
-(id)copyXPCEncoding;
-(id)description;
-(id)initWithError:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)dealloc;


@end


#endif