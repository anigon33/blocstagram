//
//  ShareViewController.m
//  Blocstagram
//
//  Created by Nigon's on 2/26/15.
//  Copyright (c) 2015 Adam Nigon. All rights reserved.
//

#import "ShareViewController.h"
#import "Media.h"
@interface ShareViewController ()

@end

@implementation ShareViewController
- (instancetype) initWithMedia:(Media *)mediaItem {
    // get the item to share
    NSMutableArray *itemsToShare = [NSMutableArray array];
    
    if (mediaItem.caption.length > 0) {
        [itemsToShare addObject:mediaItem.caption];
    }
    
    if (mediaItem.image) {
        [itemsToShare addObject:mediaItem.image];
    }
    
    if (itemsToShare.count > 0) {
        self = [super initWithActivityItems:itemsToShare applicationActivities:nil];
    } else {
        self = [super init];
    }
    
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
