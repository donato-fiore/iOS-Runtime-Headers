// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPSTORAGEITEMPROVIDER_H
#define TSWPSTORAGEITEMPROVIDER_H

@class NSString, NSArray;
@protocol NSItemProviderWriting;

#import <Foundation/Foundation.h>


@interface TSWPStorageItemProvider : NSObject <NSItemProviderWriting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *string; // ivar: _string
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;


+(id)storageItemProviderWithString:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)loadDataWithTypeIdentifier:(id)arg0 forItemProviderCompletionHandler:(id)arg1 ;
-(void)_loadPlainTextData:(id)arg0 ;
-(void)dealloc;


@end


#endif