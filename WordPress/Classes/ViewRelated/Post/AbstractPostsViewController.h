#import "WPTableViewController.h"
#import "WPTableImageSource.h"

@class AbstractPostTableViewCell;
@class BasePost;

@interface AbstractPostsViewController : WPTableViewController <WPTableImageSourceDelegate>

@property (nonatomic, strong) AbstractPostTableViewCell *cellForLayout;
@property (nonatomic, strong) WPTableImageSource *featuredImageSource;

- (void)setImageForPost:(BasePost *)post forCell:(AbstractPostTableViewCell *)cell indexPath:(NSIndexPath *)indexPath;

@end
