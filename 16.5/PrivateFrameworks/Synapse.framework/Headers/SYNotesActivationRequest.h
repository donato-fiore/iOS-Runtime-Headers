// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYNOTESACTIVATIONREQUEST_H
#define SYNOTESACTIVATIONREQUEST_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface SYNotesActivationRequest : NSObject

@property (retain, nonatomic) NSMutableArray *_imageFileURLs; // ivar: __imageFileURLs
@property (retain, nonatomic) NSMutableArray *_imagesData; // ivar: __imagesData
@property (retain, nonatomic) NSMutableArray *_urls; // ivar: __urls
@property (readonly, nonatomic) NSArray *imageFileURLs;
@property (readonly, nonatomic) NSArray *imagesData;
@property (nonatomic) BOOL shouldAutoInsertLinkToCurrentActivity; // ivar: _shouldAutoInsertLinkToCurrentActivity
@property (readonly, nonatomic) NSArray *urls;


-(id)init;
-(void)addImageData:(id)arg0 ;
-(void)addImageFileURL:(id)arg0 ;
-(void)addImageFileURLs:(id)arg0 ;
-(void)addImagesData:(id)arg0 ;
-(void)addURL:(id)arg0 ;
-(void)addURLs:(id)arg0 ;


@end


#endif