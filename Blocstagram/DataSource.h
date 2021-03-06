//
//  Datasource.h
//  Blocstagram
//
//  Created by Nigon's on 2/21/15.
//  Copyright (c) 2015 Adam Nigon. All rights reserved.
//

#import <Foundation/Foundation.h>
 @class Media;
 typedef void (^NewItemCompletionBlock)(NSError *error);
@interface DataSource : NSObject
extern NSString *const ImageFinishedNotification;

+(instancetype) sharedInstance;
+ (NSString *) instagramClientID;
@property (nonatomic, strong, readonly) NSArray *mediaItems;
 - (void) deleteMediaItem:(Media *)item;
 - (void) requestNewItemsWithCompletionHandler:(NewItemCompletionBlock)completionHandler;
- (void) requestOldItemsWithCompletionHandler:(NewItemCompletionBlock)completionHandler;
@property (nonatomic, strong, readonly) NSString *accessToken;
- (void) downloadImageForMediaItem:(Media *)mediaItem;
- (void) toggleLikeOnMediaItem:(Media *)mediaItem;
- (void) commentOnMediaItem:(Media *)mediaItem withCommentText:(NSString *)commentText;


@end
