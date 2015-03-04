//
//  ImageLibraryViewController.h
//  Blocstagram
//
//  Created by Nigon's on 3/4/15.
//  Copyright (c) 2015 Adam Nigon. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ImageLibraryViewController;

@protocol ImageLibraryViewControllerDelegate <NSObject>

- (void) imageLibraryViewController:(ImageLibraryViewController *)imageLibraryViewController didCompleteWithImage:(UIImage *)image;

@end

@interface ImageLibraryViewController : UICollectionViewController

@property (nonatomic, weak) NSObject <ImageLibraryViewControllerDelegate> *delegate;

@end