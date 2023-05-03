import IItem from "../Item/IItem"
import Size from "../../common/types/Size"
import Point from "../../common/types/Point"

interface IEditor
{
	GetItems(): Array<IItem>

	AddShape(type: string): void

	AddImage(path: string): void

	DeleteItem(id: string): void

	ResizeItem(id: string, size: Size): void

	MoveItem(id: string, point: Point): void

	CanUndo(): boolean

	Undo(): void

	CanRedo(): boolean

	Redo(): void
}

export default IEditor